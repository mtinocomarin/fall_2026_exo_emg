// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.01%
// test_accuracy: 65.79%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 12:42:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.611551, 0.611609,
    0.253253, -0.253311,
    0.473409, -0.473440,
    0.409965, -0.409962,
    -0.323604, 0.323501,
    0.172847, -0.172685,
    -0.110340, 0.110328,
    -0.002344, 0.002294,
    0.232083, -0.231918,
    -0.091821, 0.091531,
    -0.441148, 0.441230,
    0.014532, -0.014465,
};

float Cg_init[2] = {
    -0.221740, -0.221741
};

float xstd_init[12] = {
    0.003691, 0.001583, 0.146644, 0.203617, 0.000932, 0.000166, 0.023655, 0.075494, 0.000629, 0.000155, 0.029194, 0.100742
};

float xmean_init[12] = {
    0.009864, -0.005933, 0.237842, 0.677693, 0.003297, -0.007778, 0.006964, 0.070122, 0.003475, -0.007744, 0.012119, 0.110527
};

