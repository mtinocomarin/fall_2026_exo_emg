// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_7\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.86%
// test_accuracy: 72.32%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-17 17:02:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.105262, -0.105291,
    -0.234124, 0.234170,
    0.012361, -0.012361,
    -0.058560, 0.058530,
    1.642694, -1.642561,
    -1.324430, 1.324230,
    -0.362839, 0.362872,
    0.160463, -0.160416,
    -0.627060, 0.626999,
    -0.582730, 0.582817,
    0.365949, -0.365983,
    1.517769, -1.517763,
};

float Cg_init[2] = {
    -0.602214, -0.602185
};

float xstd_init[12] = {
    0.000882, 0.000077, 0.007117, 0.067576, 0.000739, 0.000124, 0.015767, 0.057544, 0.003440, 0.001057, 0.120042, 0.210844
};

float xmean_init[12] = {
    0.005543, -0.007760, 0.001524, 0.088800, 0.002410, -0.007846, 0.005333, 0.051657, 0.009072, -0.006599, 0.135696, 0.470629
};

