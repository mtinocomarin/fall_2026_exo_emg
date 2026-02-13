// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.06%
// test_accuracy: 70.83%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_33.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-12 12:46:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.124427, 1.124436,
    0.293344, -0.293311,
    0.606820, -0.606840,
    0.930285, -0.930267,
    -0.717925, 0.717955,
    0.436047, -0.436067,
    -0.011548, 0.011506,
    -0.162175, 0.162174,
    0.560976, -0.561163,
    -0.313685, 0.314066,
    -0.599667, 0.599599,
    0.206721, -0.206883,
};

float Cg_init[2] = {
    -0.500419, -0.500438
};

float xstd_init[12] = {
    0.004159, 0.001814, 0.155018, 0.208346, 0.001240, 0.000213, 0.033083, 0.088203, 0.000603, 0.000145, 0.024227, 0.098067
};

float xmean_init[12] = {
    0.010546, -0.005631, 0.252983, 0.696315, 0.003500, -0.007745, 0.011696, 0.084825, 0.003521, -0.007736, 0.010702, 0.119386
};

