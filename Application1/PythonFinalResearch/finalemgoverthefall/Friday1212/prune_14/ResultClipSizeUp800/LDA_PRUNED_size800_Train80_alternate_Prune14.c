// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.44%
// test_accuracy: 75.00%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_1.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 15:53:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.826506, 0.826433,
    -0.138587, 0.138646,
    0.708035, -0.708063,
    0.721856, -0.721817,
    1.210169, -1.210176,
    -1.150662, 1.150623,
    -0.328887, 0.328942,
    -0.040240, 0.040234,
    0.715248, -0.715384,
    0.042519, -0.042118,
    -0.483152, 0.482992,
    -0.020033, 0.019885,
};

float Cg_init[2] = {
    -0.651530, -0.651529
};

float xstd_init[12] = {
    0.003155, 0.001110, 0.102819, 0.171429, 0.001348, 0.000415, 0.021702, 0.074269, 0.000526, 0.000078, 0.016630, 0.061984
};

float xmean_init[12] = {
    0.009516, -0.006338, 0.173433, 0.588592, 0.003132, -0.007745, 0.006074, 0.051778, 0.003117, -0.007812, 0.004198, 0.065630
};

