// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.91%
// test_accuracy: 66.25%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_13.txt', 'act1\\trial_25.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-12 12:46:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.886291, 0.886345,
    0.404930, -0.404964,
    0.667556, -0.667603,
    0.821428, -0.821417,
    -0.644905, 0.644733,
    0.334867, -0.334656,
    -0.110884, 0.110881,
    -0.030219, 0.030182,
    0.402884, -0.402812,
    -0.187577, 0.187405,
    -0.665457, 0.665511,
    0.007825, -0.007765,
};

float Cg_init[2] = {
    -0.488292, -0.488296
};

float xstd_init[12] = {
    0.003838, 0.001645, 0.152080, 0.207096, 0.001119, 0.000196, 0.029411, 0.081752, 0.000690, 0.000175, 0.029920, 0.108945
};

float xmean_init[12] = {
    0.010168, -0.005802, 0.248843, 0.688141, 0.003436, -0.007757, 0.010105, 0.079228, 0.003536, -0.007726, 0.012819, 0.124141
};

