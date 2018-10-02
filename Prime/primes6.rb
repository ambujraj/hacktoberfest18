class Integer < Numeric
    def is_prime?
        return false if self <= 1
        2.upto(Math.sqrt(self).to_i) do |x|
            return false if self%x == 0
        end 
        true
    end 

    def next_prime
        n = self+1
        n = n + 1 until n.is_prime?
        n   
    end 
end
