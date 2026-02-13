// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.48%
// test_accuracy: 51.56%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_1.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_8.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-17 13:48:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.968989, 0.969070,
    0.644154, -0.644264,
    -0.058434, 0.058444,
    -0.355761, 0.355815,
    -0.625256, 0.625187,
    -0.109270, 0.109325,
    0.193654, -0.193630,
    0.132263, -0.132213,
    -0.696315, 0.696505,
    0.414836, -0.415204,
    -0.043806, 0.043885,
    0.177126, -0.177018,
};

float Cg_init[2] = {
    -0.363492, -0.363551
};

float xstd_init[12] = {
    0.001115, 0.000082, 0.012409, 0.081125, 0.002995, 0.000802, 0.089908, 0.178445, 0.000845, 0.000110, 0.017814, 0.071178
};

float xmean_init[12] = {
    0.006517, -0.007684, 0.004383, 0.143426, 0.008430, -0.006887, 0.102284, 0.437685, 0.004358, -0.007721, 0.008951, 0.125185
};

