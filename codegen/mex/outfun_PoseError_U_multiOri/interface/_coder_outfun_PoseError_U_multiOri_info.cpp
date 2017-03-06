/*
 * _coder_outfun_PoseError_U_multiOri_info.cpp
 *
 * Code generation for function '_coder_outfun_PoseError_U_multiOri_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "_coder_outfun_PoseError_U_multiOri_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties()
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString(
    "outfun_PoseError_U_multiOri"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.1.0.441655 (R2016b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char * b_data[59] = {
    "789ced5d498f2bc971ae9146a331b47824c8b6d6f1bc3160481ae135bbb90b90dddc97e65edc9aa351bf622d6491b59055c5a579317db10cf820c10343e3836c"
    "c3076b741104cb80ac9b6103bef96049360408862efa03820dd81701ae229bdd9c7cf55eb26b675736d0ef75b03bb32282f13132232223b1170a654cfdfaa8fa",
    "fdceebefc35e52ff7f59fd7e1fb6fdfac00dfd82fafdb737ff6f5f7f11fbc80dfd0df59b1405855e2adb5f0a044f63bb2f4ae459811094e6f584c6245a16b939"
    "4d6d7ec3b01cdd6479ba24ee11795625f8ecdeaf6e09ed57dacfa9214d8ef1198f4943f9f63118b74f6ce4f9befabd93e7451d79cef7e4f998fabd56bfdfc432",
    "d85b580afb327682b53019535956ff3dc1fe6ef8b56f3dc6ca58098b63612cafbe92567f2763634cc1446ca2d20d9526300abb567f16b199fa3aa3fe2b605758"
    "4da5b59932ea5c92fab3a4bed652bf79f5f79cfa772c56555f63b1c7ea2b1adf3108df2fedf1fdca0dcd4fc4052d6186c753e2accfd1dbf14bc8f83c305ea3df",
    "2c94ba99b7325f3ea949e24022f8d7b4374a3e29279aa544f2a47116388df44f1451e4fae2f284e6b9138eed9ff084c211fd1371229f6cf97fcc83fcbfa4f3fc"
    "17f69eff1b37afabefde3bc94ffd47c2f8f8ed9717c6e721faff6d40ff1add5d455a6525c3127c7cba888af520493662a9ed7c9fdf9bef059df9b0bdff8dfcbd",
    "dbf652833cff7781e76b342952ea7056fdd09204827bcccac919cb2905a132e36989252dc1d19f42c67781f15d237ad1bedfd84873f2c64e9c13501c33b8c2fe"
    "e1a3fff653dfe22acdb1a7442c3dc886faf1598caa0a7c2459cbfb035730fb7f1978be46b3b23a99c42eadc0cf1a32be048c2f99949fe6d41f4e76123ce677ef",
    "83417ff4ef5f7fd7bffe68120c4a67dc9cab0f7bc2f05296296e300d67116e5eb8f979fff91a7db37c7364fd9603c6e72c90ff467c3378f9f0cf6bfec54b9fba"
    "8c7602d37a2c9e4b136231175d65b97ac61b78b1db5ed0fa0daddf1ee2fa6d0de1b706f0abd116e1ea11c3299b1f0fd1dbef007c6834802f99243842ca0c2cc1",
    "95237ad1c5d54e0c53787ae56755fffaa96a2e979a86aab8cc9d763ad308d597d93aeb509c610de1d729bb3987f0f111800f8d666561fb51ae6861506bd67930"
    "7d5481f15523fad03e5f18764953135155c7c97be430b5dec3fec2cff1ba5c707c8d4f072c976aa6c68d6972d01cb732697fe1c8587c816155773774023f4560",
    "7cd1881e9ec2cf96ff6d74c194fdf9063fbf85bdf77dd0e8f994ce4ce6a41cef2e82a25893f1d3e0650f73063feeed0beef0f38861255961d843f64faf02fc68"
    "b43afd953aed15234a9c284eaec4392d319cb8b822b5e4da56cec073e6dd7dedcfbbd3cf3721fc3c01c63d31a29ffdb8dd565dcf91c7545ee95b7ec1999e9f12",
    "53cb699d29f71243494c4b9992d259947b0eadf7fe11c2ef9f00fc6ab4dd76f4e8f97f7035a4b9c92e0ffb3cfcbc70f3da1dff2f6e7c9b45fb3556a0e8654150"
    "0e8aef6481f9b246f508f839cdc721ff660c77b5b3666055bb16bacbe928785dcc8f9a78bf97f7463cd06e7b39873cffd0fdd57df1470e0909edabb65f5e187f",
    "6cfbaa63f75746f653ead43cb1b4176f96edc3de9be7dd706ec13eccd7eb436e19e9d1815135d0629381e662754a8438a7e2eb7ec51b2b1c2bde5801e1ed6ebc"
    "11bc850be5f1645ca1974abe8c0f6ab98b5a2ec025fd19f730babfb2bbbe02eda7bc871b37f7536b08bf4ee581bb103e5e07f8d06820ae404c26dc35be416376",
    "26900a2b0a77729e43e6ff4d607e8d666e66b91a1202a502ec90f8e19bc03c6f1ad197eee78c8e78370ecb44fc50fe45d01fb8d38bd35fd699fce9592e96cc4f"
    "a3c4ac5c192bd1411f7306775eb52358bcfe33005f1aad538f412f27098e13c9db79edae776a02e39b96e96b5f1cb375b7d8db7ef6736c948c86f8566482d7c3",
    "adb41cecb7852991f1c6fad069fbb1c0dfed4f5c1153dbdcd86e7eb37873eff349472cf37eeeffc817fd813bdd7c74be1a8e504aa5432e92e9e8453659c85c0e"
    "316ff8b91ec0af465bb5bedceeccae184e2494ab5d11fb817a447587f7b24f5477e852dd210c5f6f01fc6ab4d5fbb72b4ae40956b8a225493cf49cc80700be34",
    "9a9505423870bc593c1580f105937ad99dcf5225d88511511c11338627862f4492f1484c19e67be10031ccc770a99af5463cc429bb41e74ed0b913bbf0e5e6b9"
    "9387e4afd485e5c1e3bde7af989970b291c00a7ff5ddf3dff7afbf8a4da3d5e6944b87c7c961b39ec395693a4d3e587fa56f37c85f217ff510fdd51ac2af57f0",
    "75605c9e901eefbc96b93a7a18ae5ac0b89611bde8e2ea8dad1c7b3a321117fc733fefb3fac348ad2b700a858b7c6626e483fd4cb298f317ae9e40f8f802c087"
    "46c3f3ce05a1c61124bdf79c73c8730ecd3fbf0399a70fccd337a2b743f38637625a5037d5f34b1e5a0f8721a12584d9d0222013b8d85fd0cd718c483b5417ec",
    "757bb2cbefd9bdae44fecffbb8f3b2fff34aff8d4f007c683480af5d18c5d6badf32c047d9883e74f1b461df2c8efeab46fb1747b350a6d53d9b5d2ce5ca504e"
    "964778440ed30ed5fd7e1fc2eff9dedf1f531fdd7d7977fd05788962e72c453b116fb4bace7ed387ee86ffc793bbf7cf20de7ef8ed5fba8ab7bfb4ca6f1ac1db",
    "22d896ae2b9516391613096980cf9231aae3913e376ed88d1e1f1f04f8d0e89b698e325eafe961a706f3f1faf5db2fd5fde1aff4eaa1628b3ad3ea8622d1fc9c"
    "6bc4d3b158496c919837f0e394dda0783d8ad7dbe59ffc14af378aafd7003e345abfbe3725f2134261558458812f58fefd12187f69443fcfabebbd13c78abcb3",
    "afebe9fbcbcb4a8321c6ed7af9a2526cd00a1ec0ab3ec3194c6f1f07f8d0680067eaac77f3d9bd2ebc00c65f18d18b2ebe5431ccd7c9ff995fd6857a782ab794"
    "c065a19310845683adc9f5ca406e4e33288e61751c8363057942908ec431ecb987612781e9f360beaef35d2e38e5a23f2f34e45580c85d13897824107128efb5",
    "86f0eb94dda07d18da87f9711fe614be607a43e7bcee658fe89c9747fbcb7bc55fa17a0c548ff110eb31dcd8471c9cd7a2094e6b746867fd8525718ba7e4bfe1"
    "dc74dcc2dffba8fc7587285593a5486ade2699fef524c8f79deabbb686f0eb94dd9c43f8f810c087466bed1077d8d9cd63143f46f74b35738a9848ec9c50e893",
    "3d514cadef7c8d230eaf0c02978de06933dc5ecda96a31c62c84ac3338f29afdc0d6799f02f8d168609db7e9bb51565fe3f6e4b40b5f0d809f0666d5faee4e0c"
    "f375eefe5edfcd63c150942e5e5499745ce945894629c5f2796ff829afacef5e06f8d06854f7778b1f54f7e752dddfb1e6a7607afe18a0678dd69c21afb03c2d",
    "dfb6c4bed5835de72571609c469bc5dd537298cf0ffff4073ff2afffea0d2e9804bbcad0b5413a13aff3f56240ce39149f809dd322007e35da06fb79448a3c2f"
    "0adb86f1f21e7f288f85f25876e1cecd3cd6b1fa3dd83eebfdefd1f3fb3199152cc1db1232deeafbdab7e7bae5cde50d26ecd3d7fd6b08229fec2dc679b65d4e",
    "cdb8645248476b1587ea30dcb6170be21c37f92c0d417772797a9df8dc3c96cc5ad057fef37ffc5dffe22910ce4762a945e72c905c2cb8c0840ba5072b87e2f1"
    "6ee3e909e4f9a89f06eaa76137fe503f0de3fd343e07f0a7d1003e67325d2324469452a2202b98bd71fd36c04fdb327dbd570c73f717ad5ffbde17fd8b37a54f",
    "a5093296ac27532bbe7a2d49017a1cc978236fe6b4fdc0f4f749801f8d7e16beec5c47d6817175ebf562c5f9ae0fb7bfe15f5c45a74a7d911986e4eb66184f24"
    "6ad3acc0363d126ff4ba1f7b15e04fa39f7ffda5b97d1bec5ce51360dc1323fabae77d9f26fc99afeb40c4d4725a67cabdc45012d352a6a47416e59e4379b663",
    "c79dd17889dd717e1437f13eeedc8c9b3cd4383fb8ef92a792e2449c3f0f8cd7680be24c2af7a6f268be8ef38772196618881446d54cb0a0d4ea82304fa5f3de"
    "884bda6d2f30bff559e0f91afd547e3abdb93722b3dfeff01c32efa1714898ffb2effcca7bc432797e05fb67dcc7f86a463b6d4124e9c9c59415955c9dea341a",
    "b247e2fe76e30ba62fd447f4a0f51fea23ea521f51b7f103f34f9f069eafd1cfd857a973dec96557fcd0befb726ff7531bddecf841f5f6f7c7536945d7ae5393"
    "f4444a88ad64bd3c119bb4537179b7f1f404f27c94874679689487bee3d76b7144a3feceee3822f27bdec79d9b7eefa1c611c17a6189972dc1db0432fe0f81f1",
    "1afd66e170b8c9ec60d3fc66fb9fcab5b93ae1bf97bfebdf3a7cbade6479b65d8f88e1e9697e3691a699c820ef0caedcb293fbc621789a10acc0c51a32deea73"
    "9a14a110da0a5ae3df82755f324df9d7ffd0c142911931ab8b6c34b69825bbc48ae98d1cc2c91ac2af537683ce83a1f36076e1cbcb7d0d9dc29711bd4d2491a4",
    "65f94a9ef1ea8fd4152b4c668a6c2ede0edb67d2001f3466b26fc94e21bbce25fa42998dc3bfef6dd6bffeeb629a18b607e95447882efbcbda60be2a4d1587f6"
    "4f5eb727983e0fa8ef150869c00ae4706c263e0fab37fc2a30eeabd83d3f876415e03475b2f56237be0c7469b792988e57fcd1e71bfef567d7cb45214e649941",
    "38405633223ecacea20b87f0760c76a4c7d70700be347ad751d489fd97d5f75b3ceb7e6a54e7747f3cc5a6d16a73caa5c3e3e4b059cfe1ca349d26b3c87f69fc"
    "7521fcfd1ec09f4603fe8bd4cebb544401678501472ba29066f5eb5e8de0cef6cfa367eecff4c44271f8dd78180ef5eed9ebcea2d578364794329d703ecf7732",
    "81d3e20443383c449fa82ffdbdec14f5a5f7685f7a37e2d47a7ce8f5cd66657a3a233847f0634f1fe41b09cc9f3bf9d58fbff413dfe2279dbe2c5ece9be17e2e"
    "91c9b0e94874d86d151caad35843f875ca6ece217cbc02f0b1f199daf9c3ed4c57a42839723fe55bc0f8b730cbfb20ef8b64b61efe575f7fd7bf7e8965abc974",
    "39589a88bd7ef1941c3598d9a4ed905ff2aa1dc1f488e287287e784cf1c335845fafe4c3f4f7537c9f15e8ab394d2aa2744573344f0b8aec685d2f03ccc36016"
    "ef439f21a4b97e37d86bbd9ff9c3afe9c535da3daa170e07f0b32e55146ba7f27536c575306fc435dcb627d49703f5e5b0cbcfb9d997630de1d72b718e97013e",
    "341add1f718b1f747f844bf7471c4bfd2eea8fe15fffe2667f8c633d3762a44e63222e68abea346038b3badfb1e68f36fc9b3a47b2fef0cf6bfec5599fba8c76"
    "02d37a2c9e4b136231175d65b9ba43f10ad87ee06b00bf1a6d5d9e935e4e121c27928ff9479bd8a0ccae68b46f42fba687bb6f82d9d19b00bf1a6ddb39e4bd7c",
    "170c6fa80fb6219ca13ed82ef5c13e569c21bf86fcda31fab563ddafddf79cbf3c3b6c9f67366e68753dfd2e7eaaf26f413dfdfad7199f9c67d6cb77957196ea"
    "4e7b4ba6b49207ccb23c2a0c8529e68db8bb537603d31baadb30842b54b7e1d1ba0d373e8f0faddbbd29a97765bf65591efd460893fbad174b3ef14b7af819e6",
    "43e549384b856b782c155a31bd213d0f3b54b7eb35fb81edb350bf0dd46fc328cedcecb7e1359c19d11feabbf1347fcff067a8ef864b7d37bc8633749ecb148e"
    "d0792e97ce73790d4730fda1ba785417ff10eae2fd128fe759e1a8e3f1fced2d79a6ecf467ffd3f707cef4fc5bfce2bad055c474fc74b438bb0e9763ed0b7ce0",
    "91f3ca4ed90d4c6f281e8fe2f1281e6f3dae0ee84ba34e5995cac4d2547c03a68f1ac047cd883e74e3863bf64dc50b33451fc7e51b89ea904b9ce5e8d0a27b79"
    "daaeb624beead43dae6b08bf4ed90df24fc83f3d24ff04b3a367f5d3b012578fb4423a7aa948343f43fd3410ce10ce9cc35917c217ea1b8afa863e84bea15ec5",
    "9f05fb32d42f14bbb54fd42fd4a57ea1b0bc0f01f0abd1b6e2eb4a9ef59ff17e1c7a9e999505423870bcd7e2f2bbbcb340581297f7f57914862f4492f1484c19"
    "e67be10031ccc770a99a45b8d2f843e7c0d03930bb70e7e63930afe30ea6cf4f00fc6934b06e94684e9cece63b87cc7768fdc71a324f1998a76c99de36e298ed",
    "ebfbb69ff136ae9f062a8b5a16cf4e4e7bab5e92598519a7f2cfbea9f3b8c99f1ddb7af236afa87d30edbd6fa8cee3fe38cbcc42158989d7043e956992f1eb54"
    "70392a7b248fe694ddc0f486e2fb28be7f4cf1fd35845fafe00ad579a03a0f2fd7793cd4752088139915282bd681b03e897960bc465bd08f54e51ef52335bcfe",
    "e3f13cc98abd365e0d04dad550608e93c5bc33f872db5e9e409eff05e0f91a0df8279dc65405a1c61124bd27e739e439569d67e903f3f48de8ebd0fe5b37623e"
    "ab6ff83decb7f78ba07ff117125a42980d2d0232818bfd05dd1cc788b447ce9135007e35da2afc3de244d59c705648dff103abff7804f0a3d1baf9e7c7a42853",
    "098152a7a7f6e4b5bbfec3befe776f6ce53ad993cbfcf94ddfd47fe8e1ae8437c36ca32295996965d41bafb871fbe2e2c1f72b3ddc8ef4f87a19e04ba3599961"
    "055671e4de871230be64442f3a79e9ad0466e31dfece4b5f7091400a674b0cddc6bbb300454f7ad98543ebc835845fa7ec06967f46fd71507f1ca3f872b33fce",
    "1ac2af1b9fcb87d74db10273e078b3fec9aeba2955025437b537de087e56b9a0580af60aa470913c2b9797ad782954cf79033f4ed90df24fc83f21ffe435ff84"
    "ea7a917f72b7aed7abf108981e3f0ef0a5d14fd565087772da953fb6a44f9bae7eee9065c22e5ffcab923ffc92de39af785ca6c80b5c4c14cf82a14e2fa90cc6",
    "912ee66f5cc1d6819f01f8d268fd38bb44f3f1c0edbc76af035bc0f896e5fadac863b6bfe8bb7ece272fb976ae215ee3a79d0e3e65a48a402594914371752fdb"
    "cfa1f174748ff22d8ed03dca2edda3ec351cddb7ae5d1d6d893f82d5a7587defeb363fae726feade57ecafbff315fffa9f02939bf6b365929e939596d4080c57",
    "64799af1463d93ddf682e27b28be6717aedc8cefb98d2b98be505f8c7bd921ea8be1525f0cb7716451dc6177c1f9ad5c76fba72630be69442f07dcd7ae27cf3d"
    "ecd2d7e785d928190df1adc804af875b6939d86f0b5302adfb36cffd14f07c8d7e663c6f4f2ea3e7186178c28171b8117dc0f68fe6eb637d1dc74b67d295f9a2",
    "c4d7f1f259b1bc2a28cb321f73a82edd6d3cc1ead05f079eafd1f0732177f29d43e63ff43c887bf985e7dfc76e106fb25fce81e8e5a92eeb4cfef42c174be6a7"
    "516256ae8c95e8a08f3df43cd5f3edc82ebf66f77a11f9376fe1cd6bfe0d663f4ec7d7adc319d197f7e43c7e9ca9f298c7d9f5bf7ed9bf381b8573f501556f17",
    "e2d9ca69bcddaf87074c0de5b10eca6369683ade3cd6163bc83f19c3cdb4dfa798d0a45f6dd670a92e9ee6725c29e450df0bb7ed05e5b1501ecbb6759feff258"
    "87e3cae83aef78e384687db73ffed8d6776ee309c509519c10c509ddb72314bf40feed21fab7ef43f83ddffbfb63ee3fa89d527122ce9107c66bb4f9f580c63d",
    "ea3f68145f5460791d0a2470b9774de64e3b2db23a922f3d52b761b7bdc0d68f8f80e76bf47dfa9d19dd9779f5dc9a41ff85fa9cb9d4e7cc6d7c3d813c1ff5f7"
    "44fd3dedc69f9bfd3dbd6e4f76fb3fb3eb49e4071f0e0eddf483c7ba8f33d2cf26c9d01c8539133ff922a0b7a6657a4baa3aa3559d501b5decde476376fb4fdf",
    "f9c897fed3b7b85bcab3b3c0801146ad185f9ff0e919d928143c52ffe1b4fdc0f4f731407f1aad5dbbc72b2c4fcb57439a9bd0d29e7c9ecebb017d019e92c3bc"
    "3ffbe90f7ee45f7fd61b5c30097695a16b8374265ee7ebc5809c73a89fa1d77075dfba2a4a542cf14f6bc878abfbadc9139ad476b82aff16f45b5b5bd6dfc2ed",
    "f146f0933c6b53a5c9a85cea767b6c239a171ad322e7905f5a43f875c36ef4f8f820c08746b3323d9d119c23f8b1a4af9a4ebfc28d04e6fdcfaf7efca59ff816"
    "3fe9f465f172de0cf773894c864d47a2c36eabe0505ce36f20fc7200bf1aadd94dcd9ce14c24764e28f4f68aedad115d91a2443fe61fedc8edb65def7d3974ff",
    "84fa81deda27ea07ea523fd035845fa7fc134c6fa8efc6bdec11f5dd70a9efc61ac26f05e057a32dc3d3a3b9b6ddb1aa4eaacf11f2e3a53a23b927df11d74969"
    "f29c6ce431df67f7d39ff8a63ff0a55797b8ba20da69f272d8992b32c9e52ec53c3d9a61de8847386d3f309c7d1ae047a3f570c60a1c2bd07772da15efb3afbf",
    "cd563f5b394cf7b779f5bfd7fe3db792ec1309395909d5e65cac2e284aac339e4e3d12ef731a5f30fd7d12e047a39fe5c79cf05f96dca309d18f05751abef15f"
    "7af88a172bb9d3d2aa39222e0b4d6e398fd2cdd1d423792aa7ed07f92fe4bffce4bfbc86af03ce376ff03593e92b8966b49f6dadf7bd04c65d5aac9f3d39ac88",
    "1bfa1a6752a21cc2134caa4a66647944b40bc3789a77c88fb9576fb88fb3477d9a131757ca50a2e5a1c85177fcc170f739803f8dd6c3ddfed487e49f9f3aef72"
    "73af10ec73a903f0d3b1585fb77298eb379f0afc8b7fd78d65aa1daf5662b35cb64855a662b5d64aaf8219e4d7f4f839a0bfefce0d2c37414bcc99f8a28d7d80",
    "6ee4b95395093bf575fd6e6a5a9c2fc6a3063dcdf2a574aecbe2e96a25eb0d9c396d3f309c7d16e047a39f83b3e54e4ebbfc581be0a76d8f7e969a824cd4737c"
    "683df607bef4e2f7a3c4589871b5c0357e5909f37c3bc6a71a29cc1bf872da7e60fa4379e77bd925ca3bbb9477f61aae2cc83fb302452fcbac3073b24f877deb",
    "e83b712c88dfffc1af65ffc63d467c3899495ed77b343fe794105dc906e33387fa253e549c35b5e31af7785f0ef08b9b790b82e205dc6dc443b8bb1b6f0477fc"
    "25590a466a78ae342946a974793a173b438feccbbcb66e3c202fbd31cc1a3793ddc05b1d98af6e99be6ec5b222beef6bbce5f17cb78b07ab1d254754c7a3c245",
    "79105e78248fe6353ff72ac08f466f8af705e58a11254e142757e29c96182d5f400e69726c2e4f0dcba33d01c63d31a29ffd7afbadba9e238f997ddbdad7f5f7"
    "626a39ad33e55e622889692953523a8b72cf23fb36af9daf04e38282283d6577c7707e45fd4f2b9bd6d8b7e27ce5afbf52f62f7eda42b9da6a16aa78b9df2ad5",
    "9635828da59cea5fefc8bee25976f368400b13edc73b7e2ca8f740fdecb167da29ea67ef523ffb63c3d9c1e75b04893fdb93f3e8cfb768f2983fefec9bfc98ee"
    "fdb24c4f3c9db452f59a3cbb904ee5b352afc07824cee1b4fda0fa60541f6c35bebc5c1fec357ca1fa608433a338f3727d3009f0abd136e04cb740f810dca1fa",
    "6043f68aea833d5a1fec35bf769fbac5dd16cd89fd9913798d9daa4cd8a9afeb83430c599696359ccf9f32f47cd829558854d623eb4737ed478f1fbdbe6e124d"
    "703c2b98f2576bc8387bfab9dd706ebe7f87aff35d78ba1f2de543e558b21b5398452cd60d733d87e21b6b08bf4ed9cd39848f0f017c68b4967fdd6167378f5d",
    "ebbd67c5e32dec6b77ab14842363382223619e934bc2c5721e1b11c576b610aef1796ff821a7edc782783cc3898452565fe3f6e4b40b5ff6d51bde8961beded0"
    "dff738cc63c150942e5e5499745ce945894629c57a055f4eaff3503d3daaa7b70b677eafa7b70367a89e1ee10e863bbfd7d3efe30ea63f544f8feae9f7c71bc1",
    "9bdfebe9efe3e7503d3daaa7378a332fd7d33b8d3358fc02bcaf88e8cb96eccb9690f139607cce881e9eba8f57e5de54fe78fdae9fef479ff6fb14139af4abcd"
    "1a2ed5c5d35c8e2b79a58edecdfb170fb57f7e222eb44bf39cc04f1e18afd166efcddbf26fcaefbce367bfd35d455a6525c3127c7cba888af5204936621ef13b",
    "5ec3cfbe1cafdcd0bc44b17396a2adc0cf1a32be088cd768d3f8b9e1fff1e4ee7d3188a31f7efb97aee2c8b2fbfa8ce068116c4bd7954a8b1c8b898434c067c9"
    "18d541f7273ff7fee4fbaef3d0bd94da17ba97d2ad7b29fd8233b49ff22fbedcdc4f3d547c81f5163c4d08c7b85ea40885d010a6f16f411e2b99a6fc8b333a58",
    "2832236675918dc616b364975831bd51de1be74c18805f8d365507b5339c5d251429f27d56a0afe634a988d215cdd13c2d28b285fd45279248c9ec8a7664bd58"
    "03c6d730abe2a33b314cd51bfeef2b19ffe6af944e0aaf0d560c1b62665480ce30a342a5817076503eeb80f35c3399ae1112234a29519015ccdefa43fbf210ef",
    "15c3649fecd7bef745fffa35a54fa5093296ac27532bbe7a2d49017a1cc9d88fb7ff074e006ad6",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(b_data, 139944U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_outfun_PoseError_U_multiOri_info.cpp) */
