// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.70%
// test_accuracy: 50.00%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-17 13:44:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.476556, 0.476624,
    0.344976, -0.345099,
    -0.021995, 0.022005,
    -0.213311, 0.213364,
    -0.439134, 0.439131,
    -0.251922, 0.251943,
    0.059114, -0.059145,
    0.377005, -0.376962,
    -0.477737, 0.477888,
    0.262899, -0.263171,
    -0.023013, 0.023074,
    0.127056, -0.126982,
};

float Cg_init[2] = {
    -0.169143, -0.169174
};

float xstd_init[12] = {
    0.001029, 0.000082, 0.012693, 0.081706, 0.003144, 0.000846, 0.090453, 0.185134, 0.000853, 0.000113, 0.019748, 0.074027
};

float xmean_init[12] = {
    0.006484, -0.007688, 0.004872, 0.145275, 0.008543, -0.006867, 0.101685, 0.435439, 0.004389, -0.007711, 0.010659, 0.131099
};

