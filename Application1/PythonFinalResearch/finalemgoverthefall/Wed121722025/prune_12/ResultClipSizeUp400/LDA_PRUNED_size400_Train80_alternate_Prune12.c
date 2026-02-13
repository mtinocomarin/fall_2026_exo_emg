// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.43%
// test_accuracy: 51.79%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-17 13:47:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.839644, 0.839734,
    0.376660, -0.376884,
    0.274047, -0.274015,
    -0.188479, 0.188593,
    -0.534156, 0.534199,
    -0.019524, 0.019469,
    0.159661, -0.159657,
    -0.002443, 0.002432,
    -0.841618, 0.841560,
    0.351681, -0.351519,
    -0.181796, 0.181744,
    0.391901, -0.391975,
};

float Cg_init[2] = {
    -0.390994, -0.391010
};

float xstd_init[12] = {
    0.001058, 0.000081, 0.010793, 0.078984, 0.002913, 0.000786, 0.083872, 0.167963, 0.000800, 0.000085, 0.015964, 0.071690
};

float xmean_init[12] = {
    0.006457, -0.007688, 0.004000, 0.139000, 0.008453, -0.006921, 0.095619, 0.431857, 0.004330, -0.007727, 0.007810, 0.127857
};

