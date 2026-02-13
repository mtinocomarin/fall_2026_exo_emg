// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.71%
// test_accuracy: 72.32%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:14:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.807182, 0.807166,
    0.047237, -0.047199,
    0.682856, -0.682848,
    0.443464, -0.443476,
    -0.591039, 0.591047,
    0.224351, -0.224373,
    0.017946, -0.017938,
    0.218159, -0.218145,
    -0.143314, 0.143105,
    -0.034938, 0.035235,
    -0.339124, 0.339032,
    0.364396, -0.364408,
};

float Cg_init[2] = {
    -0.358987, -0.358985
};

float xstd_init[12] = {
    0.004718, 0.002114, 0.339625, 0.122091, 0.001302, 0.000229, 0.060862, 0.132154, 0.000683, 0.000163, 0.052127, 0.141974
};

float xmean_init[12] = {
    0.010809, -0.005589, 0.452190, 1.032115, 0.003509, -0.007741, 0.016381, 0.620228, 0.003547, -0.007734, 0.016571, 0.694400
};

