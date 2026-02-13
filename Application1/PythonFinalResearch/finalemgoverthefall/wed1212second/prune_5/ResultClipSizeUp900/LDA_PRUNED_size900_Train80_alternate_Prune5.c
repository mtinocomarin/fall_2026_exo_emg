// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_5\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.70%
// test_accuracy: 72.79%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-17 17:01:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.330804, 0.330681,
    -0.104158, 0.104404,
    0.005808, -0.005827,
    0.152509, -0.152649,
    1.295348, -1.295205,
    -0.837616, 0.837389,
    -0.080771, 0.080833,
    0.029995, -0.029965,
    -0.456347, 0.456368,
    -0.406784, 0.406774,
    0.434339, -0.434355,
    0.750304, -0.750309,
};

float Cg_init[2] = {
    -0.371745, -0.371714
};

float xstd_init[12] = {
    0.000911, 0.000071, 0.007950, 0.063801, 0.000639, 0.000099, 0.013155, 0.050305, 0.003319, 0.001002, 0.115545, 0.205622
};

float xmean_init[12] = {
    0.005498, -0.007759, 0.002062, 0.091591, 0.002322, -0.007860, 0.003922, 0.043878, 0.008912, -0.006623, 0.130690, 0.468715
};

