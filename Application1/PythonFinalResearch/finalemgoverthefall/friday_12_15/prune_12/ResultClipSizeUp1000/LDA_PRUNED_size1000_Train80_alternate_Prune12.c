// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.24%
// test_accuracy: 62.83%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_28.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_3.txt', 'act2\\trial_29.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 12:46:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.652649, 0.652652,
    0.377723, -0.377732,
    0.737349, -0.737384,
    0.630160, -0.630150,
    -0.430479, 0.430299,
    0.171584, -0.171312,
    -0.091346, 0.091324,
    -0.065947, 0.065884,
    0.362765, -0.362614,
    -0.277947, 0.277666,
    -0.455359, 0.455436,
    -0.001262, 0.001345,
};

float Cg_init[2] = {
    -0.452880, -0.452874
};

float xstd_init[12] = {
    0.003709, 0.001590, 0.151909, 0.206155, 0.001016, 0.000183, 0.026265, 0.080013, 0.000664, 0.000167, 0.030170, 0.103629
};

float xmean_init[12] = {
    0.010104, -0.005832, 0.251510, 0.691158, 0.003359, -0.007769, 0.008246, 0.073842, 0.003500, -0.007737, 0.012667, 0.114632
};

