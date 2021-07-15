import Foundation

extension Sequence where Element == Int {
    func biggestMultiple(of number: Int) -> Int? {
        return filter { number != 0 && number % $0 == 0 }.sorted(by: >).first
    }
}

extension Int {
    var digits: [Int] {
        var remaining: Int = self
        var digs: [Int] = []
        while remaining > 0 {
            digs.append(remaining % 10)
            remaining = remaining/10
        }
        return digs.reversed()
    }
}

public class RomanNumeralConverter {
    static let algarismsMap: [Int: String] = [1000: "M",
                                              500: "D",
                                              100: "C",
                                              50: "L",
                                              10: "X",
                                              5: "V",
                                              1: "I"]

    static let keys: [Int] = {
        return algarismsMap.keys.sorted(by: >)
    }()

    public static func convert(_ number: Int) -> String {
        guard number > 0 else {
            return ""
        }
        let digits = number.digits
        let multipliers = (0..<digits.count).map { Int(pow(10, Double($0))) }.reversed()
        let numbers = zip(digits, multipliers).map { $0.0 * $0.1 }
        let algarisms = numbers.map { num -> String in
            guard num > 0 else {
                return ""
            }
            let ordererdByClosest = keys.sorted(by: { first, second in
                return abs(first.distance(to: num)) < abs(second.distance(to: num))
            })
            let closest = ordererdByClosest.first!
            let distance = closest.distance(to: num)
            if abs(distance) > 0 {
                let mult = keys.biggestMultiple(of: distance) ?? 1
                let times = distance/mult
                let absTimes = abs(times)

                let modifierAlgarism: Character
                let modifierMultiplier: Int
                let appendingAlgarism: Bool

                let algarism: String

                if distance > 0 && absTimes <= 3 {
                    modifierAlgarism = algarismsMap[mult]!.first!
                    modifierMultiplier = absTimes
                    appendingAlgarism = true
                    algarism = algarismsMap[closest] ?? ""
                } else if distance < 0 && absTimes <= 1 {
                    modifierAlgarism = algarismsMap[mult]!.first!
                    modifierMultiplier = absTimes
                    appendingAlgarism = false
                    algarism = algarismsMap[closest] ?? ""
                } else {
                    let addClosest = ordererdByClosest[1]
                    let addDistance = addClosest.distance(to: num)
                    let addMult = keys.biggestMultiple(of: addDistance) ?? 1
                    let addTimes = addDistance/addMult


                    modifierAlgarism = algarismsMap[addMult]!.first!
                    modifierMultiplier = addTimes
                    appendingAlgarism = true
                    algarism = algarismsMap[addClosest] ?? ""
                }

                let modifier = String(repeating: modifierAlgarism, count: modifierMultiplier)
                if appendingAlgarism {
                    return algarism.appending(modifier)
                } else {
                    return modifier.appending(algarism)
                }
            } else {
                return algarismsMap[num] ?? ""
            }
        }
        return algarisms.joined()
    }
}
