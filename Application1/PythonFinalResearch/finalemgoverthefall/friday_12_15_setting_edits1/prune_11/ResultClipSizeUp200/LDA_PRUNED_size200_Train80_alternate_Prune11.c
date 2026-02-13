// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.68%
// test_accuracy: 85.42%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:16:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.216595, 1.216589,
    0.339250, -0.339244,
    1.133426, -1.133431,
    0.606517, -0.606515,
    -0.439315, 0.439334,
    0.013170, -0.013186,
    -0.077827, 0.077824,
    0.353526, -0.353524,
    -0.115989, 0.115989,
    -0.115057, 0.115052,
    -0.554586, 0.554588,
    0.401279, -0.401273,
};

float Cg_init[2] = {
    -0.683190, -0.683189
};

float xstd_init[12] = {
    0.004029, 0.001818, 0.316780, 0.112395, 0.001693, 0.000313, 0.080583, 0.144086, 0.000677, 0.000166, 0.042907, 0.143252
};

float xmean_init[12] = {
    0.010710, -0.005698, 0.422752, 1.039048, 0.003727, -0.007704, 0.023280, 0.624444, 0.003573, -0.007728, 0.014815, 0.694603
};

