// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.69%
// test_accuracy: 72.92%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 15:52:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.062751, 1.062706,
    -0.059341, 0.059375,
    0.726241, -0.726273,
    0.871167, -0.871127,
    1.288072, -1.288129,
    -1.398073, 1.398145,
    -0.321384, 0.321383,
    -0.052341, 0.052329,
    1.129125, -1.129248,
    0.000823, -0.000467,
    -0.859378, 0.859237,
    0.106397, -0.106519,
};

float Cg_init[2] = {
    -0.871928, -0.871936
};

float xstd_init[12] = {
    0.003490, 0.001209, 0.104298, 0.173813, 0.001606, 0.000501, 0.024599, 0.082520, 0.000522, 0.000088, 0.019783, 0.062042
};

float xmean_init[12] = {
    0.009685, -0.006281, 0.166706, 0.583626, 0.003279, -0.007707, 0.007329, 0.055556, 0.003114, -0.007809, 0.005458, 0.067836
};

