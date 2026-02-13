// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_12\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.11%
// test_accuracy: 68.75%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt']}
// generated: 2026-02-13 14:49:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.119309, 0.119086,
    -0.151467, 0.151950,
    0.021824, -0.021878,
    0.163097, -0.163343,
    1.688578, -1.688566,
    -1.189673, 1.189594,
    0.004946, -0.004917,
    0.100118, -0.100095,
    -0.590706, 0.590732,
    -0.214541, 0.214516,
    0.600315, -0.600335,
    1.142368, -1.142376,
};

float Cg_init[2] = {
    -0.630975, -0.630976
};

float xstd_init[12] = {
    0.000948, 0.000075, 0.007471, 0.066011, 0.000694, 0.000107, 0.013656, 0.051158, 0.003106, 0.000994, 0.120161, 0.212559
};

float xmean_init[12] = {
    0.005621, -0.007753, 0.002035, 0.093685, 0.002358, -0.007857, 0.004211, 0.044474, 0.008784, -0.006596, 0.138176, 0.478526
};

