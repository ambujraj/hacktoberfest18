defmodule Pangram do
  @alphabet ?a..?z

  @spec pangram?(String.t) :: boolean
  def pangram?(sentence) do
    sentence
    |> String.downcase
    |> String.to_charlist
    |> Enum.filter(&(&1 >= ?a && &1 <= ?z))
    |> Enum.uniq
    |> Enum.count
    == (@alphabet |> Enum.count)
  end
end