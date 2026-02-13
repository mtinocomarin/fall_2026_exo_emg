// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.30%
// test_accuracy: 73.21%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:12:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.712914, 0.712904,
    0.037820, -0.037803,
    0.484145, -0.484142,
    0.358117, -0.358117,
    -0.360651, 0.360645,
    0.039684, -0.039687,
    0.005173, -0.005168,
    0.189499, -0.189487,
    0.023842, -0.023943,
    -0.067585, 0.067734,
    -0.400260, 0.400210,
    0.261075, -0.261081,
};

float Cg_init[2] = {
    -0.275118, -0.275114
};

float xstd_init[12] = {
    0.004874, 0.002274, 0.343818, 0.122484, 0.001290, 0.000232, 0.058448, 0.132881, 0.000670, 0.000157, 0.051192, 0.143127
};

float xmean_init[12] = {
    0.011018, -0.005432, 0.466994, 1.031921, 0.003498, -0.007741, 0.015764, 0.620098, 0.003556, -0.007729, 0.017570, 0.699310
};

