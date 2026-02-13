// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.82%
// test_accuracy: 71.02%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 12:42:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.760374, 0.760393,
    0.256712, -0.256731,
    0.405387, -0.405427,
    0.727802, -0.727782,
    -0.338346, 0.338167,
    0.183391, -0.183153,
    -0.095551, 0.095553,
    -0.187512, 0.187459,
    0.180709, -0.180621,
    -0.045098, 0.044910,
    -0.470418, 0.470473,
    -0.086382, 0.086451,
};

float Cg_init[2] = {
    -0.320001, -0.320002
};

float xstd_init[12] = {
    0.004184, 0.001801, 0.147502, 0.204291, 0.001158, 0.000208, 0.029461, 0.087411, 0.000677, 0.000171, 0.029586, 0.107497
};

float xmean_init[12] = {
    0.010353, -0.005737, 0.242705, 0.682867, 0.003436, -0.007753, 0.010163, 0.080769, 0.003535, -0.007729, 0.013753, 0.120420
};

