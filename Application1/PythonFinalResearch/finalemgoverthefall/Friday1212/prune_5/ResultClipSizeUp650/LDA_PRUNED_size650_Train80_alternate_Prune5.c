// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.48%
// test_accuracy: 70.83%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:48:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.698220, 0.698250,
    -0.224282, 0.224244,
    0.489714, -0.489732,
    0.653504, -0.653486,
    0.765155, -0.765037,
    -0.795467, 0.795329,
    -0.047631, 0.047663,
    -0.051763, 0.051757,
    -0.465858, 0.465759,
    0.320110, -0.319963,
    -0.306808, 0.306769,
    0.118716, -0.118796,
};

float Cg_init[2] = {
    -0.304494, -0.304482
};

float xstd_init[12] = {
    0.003752, 0.001358, 0.106022, 0.171834, 0.001485, 0.000433, 0.025924, 0.075768, 0.001723, 0.000092, 0.016056, 0.068479
};

float xmean_init[12] = {
    0.009793, -0.006245, 0.178108, 0.586666, 0.003155, -0.007746, 0.006502, 0.048827, 0.003255, -0.007807, 0.004115, 0.067655
};

