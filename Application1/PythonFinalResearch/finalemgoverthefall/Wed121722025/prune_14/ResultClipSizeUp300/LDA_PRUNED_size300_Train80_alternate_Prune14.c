// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.33%
// test_accuracy: 51.25%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 13:48:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.256276, 1.256192,
    0.452314, -0.452168,
    0.363963, -0.363975,
    0.149115, -0.149184,
    -1.051842, 1.051803,
    -0.209221, 0.209244,
    0.551622, -0.551606,
    0.219726, -0.219728,
    -1.237971, 1.237929,
    0.554639, -0.554569,
    -0.350565, 0.350552,
    0.502562, -0.502583,
};

float Cg_init[2] = {
    -0.594554, -0.594523
};

float xstd_init[12] = {
    0.001103, 0.000083, 0.011783, 0.083823, 0.002635, 0.000760, 0.082792, 0.166423, 0.000893, 0.000088, 0.016745, 0.074695
};

float xmean_init[12] = {
    0.006568, -0.007680, 0.004889, 0.142889, 0.008621, -0.006885, 0.098815, 0.458000, 0.004332, -0.007725, 0.008296, 0.132222
};

