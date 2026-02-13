// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.92%
// test_accuracy: 55.11%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-17 13:47:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.776800, 0.776904,
    0.512250, -0.512480,
    -0.065210, 0.065241,
    -0.303499, 0.303622,
    -0.351653, 0.351647,
    -0.290319, 0.290341,
    0.073347, -0.073358,
    0.217396, -0.217386,
    -0.697289, 0.697320,
    0.303375, -0.303397,
    0.063832, -0.063844,
    0.184241, -0.184250,
};

float Cg_init[2] = {
    -0.283068, -0.283103
};

float xstd_init[12] = {
    0.001087, 0.000081, 0.010608, 0.082791, 0.003133, 0.000863, 0.093842, 0.185996, 0.000859, 0.000112, 0.018460, 0.072431
};

float xmean_init[12] = {
    0.006495, -0.007688, 0.003521, 0.143983, 0.008503, -0.006864, 0.104185, 0.433420, 0.004405, -0.007712, 0.009697, 0.132121
};

