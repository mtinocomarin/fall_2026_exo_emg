// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.55%
// test_accuracy: 64.84%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:14:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.620209, 0.620198,
    -0.178801, 0.178793,
    0.753408, -0.753393,
    0.341151, -0.341152,
    -0.515289, 0.515436,
    0.103356, -0.103504,
    0.030327, -0.030339,
    0.179613, -0.179595,
    0.229303, -0.229271,
    -0.387573, 0.387488,
    -0.275796, 0.275834,
    0.416053, -0.416043,
};

float Cg_init[2] = {
    -0.344051, -0.344045
};

float xstd_init[12] = {
    0.004704, 0.002123, 0.343035, 0.125513, 0.001336, 0.000235, 0.059723, 0.136867, 0.000693, 0.000175, 0.054928, 0.136404
};

float xmean_init[12] = {
    0.010739, -0.005597, 0.449826, 1.030209, 0.003537, -0.007737, 0.017882, 0.625729, 0.003555, -0.007729, 0.016667, 0.703021
};

