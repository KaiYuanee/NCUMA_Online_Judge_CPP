#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

bool compareByIV(const tuple<string, int, int, int, int> tuple1, const tuple<string, int, int, int, int> tuple2) {
    return get<4>(tuple1) < get<4>(tuple2);
}

int main() {
    int N, atk, hp, def;
    string name;
    cin >> N;
    vector<tuple<string, int, int, int, int>> pokemon_species(N);
    for (int i = 0; i < N; i++) {
        cin >> name >> atk >> hp >> def;
        pokemon_species[i] = make_tuple(name, atk, hp, def, (atk + hp + def) * 100 / 45);
    }
    sort(pokemon_species.begin(), pokemon_species.end(), compareByIV);
    for (tuple<string, int, int, int, int> t : pokemon_species) {
        cout << get<0>(t) << ' ' << get<4>(t) << endl;
    }
    cout << "The weaknest pokemon is: " << get<0>(pokemon_species[0]);
    return 0;
}
