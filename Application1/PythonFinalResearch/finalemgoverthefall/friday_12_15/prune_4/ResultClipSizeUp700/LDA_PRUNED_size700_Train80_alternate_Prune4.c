// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.65%
// test_accuracy: 70.67%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-12 12:41:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.701241, 0.701313,
    0.132629, -0.132694,
    0.336240, -0.336287,
    0.595533, -0.595519,
    -0.517566, 0.517389,
    0.262982, -0.262736,
    -0.022363, 0.022359,
    -0.033963, 0.033895,
    0.209083, -0.208960,
    -0.063101, 0.062867,
    -0.440373, 0.440434,
    0.017244, -0.017168,
};

float Cg_init[2] = {
    -0.229520, -0.229521
};

float xstd_init[12] = {
    0.004297, 0.001954, 0.148756, 0.203882, 0.001054, 0.000189, 0.027130, 0.081114, 0.000661, 0.000162, 0.028281, 0.106138
};

float xmean_init[12] = {
    0.010310, -0.005725, 0.242016, 0.683187, 0.003366, -0.007765, 0.009194, 0.075440, 0.003515, -0.007735, 0.012784, 0.117748
};

