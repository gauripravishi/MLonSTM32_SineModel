/**
  ******************************************************************************
  * @file    sine_model_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Jun 10 17:32:02 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "sine_model_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sine_model_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sine_model_weights_array_u64[161] = {
  0x3ea9b27abeb2b6fcU, 0x3d9691073eaae4caU, 0xbdbe8a003ee12355U, 0xbea5d0bebe9fff6bU,
  0xbe7c32fcbeb00263U, 0xbeaf0c28bece4779U, 0x3edc9d18bebd1d77U, 0xbec33941bee772a0U,
  0xbc96737f00000000U, 0x3f3a93b4bf40f22cU, 0xbec77a0cU, 0x0U,
  0x0U, 0x0U, 0xbcc6f3e900000000U, 0x0U,
  0x3e4ef299be98728eU, 0xbd97023a3e0d57cfU, 0xbb416c003e1a5289U, 0x3dca20a4bece05aaU,
  0xbe638a46bea85581U, 0xbe8da0043ed515edU, 0x3df215093c95f110U, 0xbe14895c3e6b52b2U,
  0x3cce4b29be11a148U, 0x3ecec777bf98e31bU, 0xbe462f34bf0b7c4dU, 0xbd920eb43d0a4468U,
  0x3ec1b4b5be683185U, 0xbb608280be100fa4U, 0x3eba681fbec7dbacU, 0x3d850fc0be3ac27aU,
  0x3d25a0a73e8083fbU, 0xbe8ce4353ea269e1U, 0xbe84f2723eb216eeU, 0xbd75a2e03d26cea0U,
  0x3e031cb63e0b477aU, 0x3ea375a5bea67a99U, 0xbebfdb01be81e841U, 0x3eb2e5cdbe96a8ffU,
  0xbedd54ba3ebef0c3U, 0xbe9804953ecb4c49U, 0xbca818d03c6f0da0U, 0x3e9c2607bded3004U,
  0xbe89517c3e9e9931U, 0x3ec8e3e13dc4a32cU, 0xbe0234503e321e96U, 0x3e43e9f2bed99c54U,
  0x3e8a8d2f3e58cf22U, 0x3db0a56cbf28f8c2U, 0xbce5a240be237b53U, 0x3eb539713e9ebd9bU,
  0x3e5bb356bed386a2U, 0x3ec64c3b3e629faaU, 0x3cc216193e92b45bU, 0x3ec349c1bec468daU,
  0x3e970ca43ed1cb91U, 0x3e8c51a03e87584cU, 0xbdb5ef10bf5c5d24U, 0xbd009d003eade44dU,
  0xbdfd40643e92bbfdU, 0x3e6fc286be4213e7U, 0xbc1be435be85a1dfU, 0x3ea2aced3ed29303U,
  0xbe39a94f3e68c98eU, 0x3e89fdd93eb11898U, 0x3d0e10d8bcbb0965U, 0x3d8ef89c3ecb4513U,
  0xbed02c783e4cc576U, 0xbeddb1be3cfcb800U, 0x3e5de2823e3f74d6U, 0xbe63e8363db312bcU,
  0x3ec8088b3c9f5480U, 0x3ee442e43d39635cU, 0xbe2d4ada3e8a435aU, 0x3ec22aef3e70d93eU,
  0xbdf579303e52e042U, 0xbdd761b8bed9e99fU, 0xbe1d584ebe4898d8U, 0xbd81aac03e25b91aU,
  0x3e70c028bdc15a1cU, 0xbeb7f05d3f5db1ffU, 0xbeb5e9e8bd30ead8U, 0xbe981bf73ea2d823U,
  0x3ccff530bd4390b8U, 0x3d8c6bbcbbe28280U, 0x3b2534fe3e21ef56U, 0xbe42055f3d433380U,
  0x3e71cf9abcb5bc60U, 0xbe7d03b73e7c8abeU, 0x3e9166b7bed2f602U, 0x3e9cf7333e1e5e02U,
  0xbe867914bc3bde40U, 0xbecc281b3e445e96U, 0xbea268e1bd8589a8U, 0x3d364250be95cc25U,
  0xbe317b1abe9926c2U, 0xbed90ab03e961233U, 0xbe245c86bea6cd93U, 0xbe7f7c833e8646cbU,
  0x3e875151be255c4cU, 0xbea7b97cbe9d17d6U, 0x3aa376003ec05ac5U, 0xbd899794bec8cd02U,
  0xbeb1f2693de8059cU, 0xbe2340bc3dc27e64U, 0x3ea64cc7bec8736eU, 0xbd8dadccbea86a82U,
  0x3e6396ce3e291bfeU, 0x3d30d000beb86f42U, 0xbeb35d92beb110d6U, 0x3dc0c6943e948fa7U,
  0x3d534acfbe925ef8U, 0xbec542703ed59225U, 0xbe7122053d72ba5aU, 0xbea95d4ebdb5fb14U,
  0x3eb441a33b610680U, 0xbea64418bed11a73U, 0x3e9551533d21f818U, 0x3e2eae2abe284de6U,
  0x3d0a0d493e7a91b2U, 0xbed4fe3ebf21df5bU, 0x3e9250d53eb00f80U, 0x3ea76ecdbed4ba19U,
  0x3ebd44c1bd8b796cU, 0x3e53e50a3e8da719U, 0x3eacef7c3e888403U, 0x3eae1bc5beb53788U,
  0xbf7d7683be529792U, 0x3ee37c483e90a703U, 0x3ea76babbef39e5bU, 0x3caffe903eb0f59dU,
  0xbed60d5dbdd67b24U, 0xbe053cbc3def4c14U, 0xbf0365d4be98be4eU, 0x3dac725cbe159ac8U,
  0x3ea243d43e8f5bb9U, 0xbe9ec168bf20ddc2U, 0xbe2e893a3e92f492U, 0xbdbe35ccbeb0ad84U,
  0x3e67d9ae3ec3a4b9U, 0x3e8c489fbe95c7e2U, 0xbd3d9a9f3e812c79U, 0xbea6f3ca3e894f17U,
  0x3f0a32d43e486537U, 0xbc58d432U, 0xbe26b1f73e7f3ce8U, 0x3dd5b863be802c3eU,
  0xbf4b2040U, 0x0U, 0xbd5dc58dbedba949U, 0x3df486373ef8e8c0U,
  0x3fcd5496be9b8400U, 0xbd978a10be3fbc42U, 0x3ee601e03edabb16U, 0xbec1df763e8079abU,
  0xbc431c00400f31ffU, 0xbe92127a3f018500U, 0xbec6fe3b3f819348U, 0xbd648694bf82e2faU,
  0xbec90965U,
};


ai_handle g_sine_model_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sine_model_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

