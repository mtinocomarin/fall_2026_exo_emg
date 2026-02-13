// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.07%
// test_accuracy: 78.33%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_34.txt']}
// generated: 2025-12-12 16:08:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.816095, 0.816173,
    -0.227820, 0.227806,
    0.627171, -0.627221,
    0.618039, -0.618036,
    1.098866, -1.098868,
    -1.107460, 1.107495,
    -0.173604, 0.173566,
    -0.080554, 0.080550,
    0.748356, -0.748155,
    -0.031059, 0.030530,
    -0.361783, 0.361981,
    0.027497, -0.027327,
};

float Cg_init[2] = {
    -0.551895, -0.551902
};

float xstd_init[12] = {
    0.003290, 0.001270, 0.102361, 0.165950, 0.001226, 0.000379, 0.019399, 0.067761, 0.000526, 0.000076, 0.015024, 0.062379
};

float xmean_init[12] = {
    0.009619, -0.006296, 0.174543, 0.589867, 0.003067, -0.007757, 0.005120, 0.047947, 0.003094, -0.007815, 0.003804, 0.063574
};

