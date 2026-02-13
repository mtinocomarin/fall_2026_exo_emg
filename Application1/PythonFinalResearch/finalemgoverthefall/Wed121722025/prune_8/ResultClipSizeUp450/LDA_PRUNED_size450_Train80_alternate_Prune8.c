// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.04%
// test_accuracy: 54.69%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 13:45:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.647277, 0.647252,
    0.332358, -0.332248,
    0.163418, -0.163436,
    -0.180024, 0.179956,
    -0.675905, 0.675892,
    -0.171487, 0.171481,
    0.380898, -0.380880,
    0.239930, -0.239899,
    -0.720084, 0.720219,
    0.288076, -0.288320,
    -0.038979, 0.039055,
    0.230838, -0.230782,
};

float Cg_init[2] = {
    -0.282031, -0.282042
};

float xstd_init[12] = {
    0.001044, 0.000081, 0.011981, 0.081350, 0.003023, 0.000814, 0.084258, 0.178150, 0.000866, 0.000113, 0.018093, 0.071968
};

float xmean_init[12] = {
    0.006477, -0.007685, 0.004653, 0.145729, 0.008724, -0.006840, 0.103542, 0.447604, 0.004369, -0.007715, 0.009097, 0.129167
};

