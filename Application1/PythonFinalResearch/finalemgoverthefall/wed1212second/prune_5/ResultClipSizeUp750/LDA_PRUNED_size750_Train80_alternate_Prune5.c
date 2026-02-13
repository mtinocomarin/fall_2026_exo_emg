// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_5\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.88%
// test_accuracy: 75.45%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 17:01:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.279986, 0.280225,
    -0.097525, 0.097120,
    -0.031816, 0.031863,
    0.164863, -0.164692,
    1.358850, -1.359170,
    -1.015058, 1.015582,
    -0.103495, 0.103390,
    0.172473, -0.172617,
    -0.448507, 0.448466,
    -0.497264, 0.497349,
    0.455009, -0.455050,
    0.864786, -0.864787,
};

float Cg_init[2] = {
    -0.410068, -0.410171
};

float xstd_init[12] = {
    0.000883, 0.000073, 0.008044, 0.062518, 0.000650, 0.000100, 0.012977, 0.048535, 0.003326, 0.001003, 0.115622, 0.206603
};

float xmean_init[12] = {
    0.005492, -0.007761, 0.002011, 0.089048, 0.002332, -0.007859, 0.004021, 0.043968, 0.008955, -0.006616, 0.132699, 0.468624
};

