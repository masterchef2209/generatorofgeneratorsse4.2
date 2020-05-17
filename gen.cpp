#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rnd(x, y) uniform_int_distribution<ll>(x, y)(rng)


void pprint16(ll num)
{
    cout << "static MunitResult\n";
    cout << "test_simde_mm_xxx(const MunitParameter params[], void* data) {\n";
    cout << "  (void) params;\n";
    cout << "  (void) data;\n\n";
    cout << "  const struct {\n";
    cout << "    simde__m128i a;\n";
    cout << "    int la;\n";
    cout << "    simde__m128i b;\n";
    cout << "    int lb;\n";
    cout << "    int r;\n";
    cout << "  } test_vec[8] = {\n\n";
    cout << "  };\n\n";
    cout << "  printf(\"\\n\");\n";
    cout << "  for (size_t i = 0 ; i < (sizeof(test_vec) / (sizeof(test_vec[0]))) ; i++) {\n";
    cout << "    simde__m128i_private a, b;\n";
    cout << "    int la, lb, r;\n\n";
    cout << "    munit_rand_memory(sizeof(a), (uint8_t*) &a);\n";
    cout << "    munit_rand_memory(sizeof(b), (uint8_t*) &b);\n";
    cout << "    la = munit_rand_int_range(0, 128/16);\n";
    cout << "    lb = munit_rand_int_range(0, 128/16);\n\n";
    cout << "    r = simde_mm_xxx(simde__m128i_from_private(a), la, simde__m128i_from_private(b), lb, " << num << ");\n";
    cout << "    printf(\"    { simde_mm_set_epi16(INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"),\\n\"\n";
    cout << "    \"                         INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \")),\\n\",\n";
    cout << "           a.i16[7], a.i16[6], a.i16[5], a.i16[4], a.i16[3], a.i16[2], a.i16[1], a.i16[0]);\n";
    cout << "    printf(\"      \%d ,\\n\",la);\n";
    cout << "    printf(\"      simde_mm_set_epi16(INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"),\\n\"\n";
    cout << "    \"                         INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \"), INT16_C(\%6\" PRId16 \")),\\n\",\n";
    cout << "           b.i16[7], b.i16[6], b.i16[5], b.i16[4], b.i16[3], b.i16[2], b.i16[1], b.i16[0]);\n";
    cout << "    printf(\"      \%d ,\\n\",lb);\n";
    cout << "    printf(\"      \%d },\\n\",r);\n";
    cout << "  }\n";
    cout << "  return MUNIT_FAIL;\n\n";
    cout << "  for (size_t i = 0 ; i < (sizeof(test_vec) / sizeof(test_vec[0])); i++) {\n";
    cout << "    int r = simde_mm_xxx(test_vec[i].a, test_vec[i].la, test_vec[i].b, test_vec[i].lb, " << num << ");\n";
    cout << "    munit_assert_int(r, ==, test_vec[i].r);\n";
    cout << "  }\n\n";
    cout << "  return MUNIT_OK;\n";
    cout << "}\n";
}

void pprint8(ll num)
{
    cout << "static MunitResult\n";
    cout << "test_simde_mm_xxx(const MunitParameter params[], void* data) {\n";
    cout << "  (void) params;\n";
    cout << "  (void) data;\n\n";
    cout << "  const struct {\n";
    cout << "    simde__m128i a;\n";
    cout << "    int la;\n";
    cout << "    simde__m128i b;\n";
    cout << "    int lb;\n";
    cout << "    int r;\n";
    cout << "  } test_vec[8] = {\n\n";
    cout << "  };\n\n";
    cout << "  printf(\"\\n\");\n";
    cout << "  for (size_t i = 0 ; i < (sizeof(test_vec) / (sizeof(test_vec[0]))) ; i++) {\n";
    cout << "    simde__m128i_private a, b;\n";
    cout << "    int la, lb, r;\n\n";
    cout << "    munit_rand_memory(sizeof(a), (uint8_t*) &a);\n";
    cout << "    munit_rand_memory(sizeof(b), (uint8_t*) &b);\n";
    cout << "    la = munit_rand_int_range(0, 128/8);\n";
    cout << "    lb = munit_rand_int_range(0, 128/8);\n\n";
    cout << "    r = simde_mm_xxx(simde__m128i_from_private(a), la, simde__m128i_from_private(b), lb, " << num << ");\n";
    cout << "    printf(\"    { simde_mm_set_epi8(INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"),\\n\"\n";
    cout << "    \"                        INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"),\\n\"\n";
    cout << "    \"                        INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"),\\n\"\n";
    cout << "    \"                        INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \")),\\n\",\n";
    cout << "           a.i8[15], a.i8[14], a.i8[13], a.i8[12], a.i8[11], a.i8[10], a.i8[ 9], a.i8[ 8],\n";
    cout << "           a.i8[ 7], a.i8[ 6], a.i8[ 5], a.i8[ 4], a.i8[ 3], a.i8[ 2], a.i8[ 1], a.i8[ 0]);\n";
    cout << "    printf(\"      \%d ,\\n\",la);\n";
    cout << "    printf(\"      simde_mm_set_epi8(INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"),\\n\"\n";
    cout << "    \"                        INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"),\\n\"\n";
    cout << "    \"                        INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"),\\n\"\n";
    cout << "    \"                        INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \"), INT8_C(\%4\" PRId8 \")),\\n\",\n";
    cout << "           b.i8[15], b.i8[14], b.i8[13], b.i8[12], b.i8[11], b.i8[10], b.i8[ 9], b.i8[ 8],\n";
    cout << "           b.i8[ 7], b.i8[ 6], b.i8[ 5], b.i8[ 4], b.i8[ 3], b.i8[ 2], b.i8[ 1], b.i8[ 0]);\n";
    cout << "    printf(\"      \%d ,\\n\",lb);\n";
    cout << "    printf(\"      \%d },\\n\",r);\n";
    cout << "  }\n";
    cout << "  return MUNIT_FAIL;\n\n";
    cout << "  for (size_t i = 0 ; i < (sizeof(test_vec) / sizeof(test_vec[0])); i++) {\n";
    cout << "    int r = simde_mm_xxx(test_vec[i].a, test_vec[i].la, test_vec[i].b, test_vec[i].lb, " << num << ");\n";
    cout << "    munit_assert_int(r, ==, test_vec[i].r);\n";
    cout << "  }\n\n";
    cout << "  return MUNIT_OK;\n";
    cout << "}\n";
}

ll turnOffK(ll n, ll k)
{
    // k must be greater than 0
    k++;
    if (k <= 0) return n;

    // Do & of n with a number with all set bits except
    // the k'th bit
    return (n & ~(1 << (k - 1)));
}

ll turnOnK(ll n, ll k)
{
    // k must be greater than 0
    k++;
    if (k <= 0)
        return n;

    // Do | of n with a number with all
    // unset bits except the k'th bit
    return (n | (1 << (k - 1)));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll hehe = (1LL << 8) - 1;
    ll num = rnd(0, hehe);

    //do changes
    num = turnOffK(num, 4);
    num = turnOnK(num, 3);


    num = turnOffK(num, 0);
    pprint8(num);

    num = turnOnK(num, 0);
    pprint16(num);

    return 0;
}


//252908XL

/*
comments:-

*/
