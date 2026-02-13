// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.96%
// test_accuracy: 73.75%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:06:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.718304, 0.718348,
    -0.243690, 0.243690,
    0.439644, -0.439681,
    0.848809, -0.848807,
    0.909543, -0.909614,
    -0.814770, 0.814851,
    -0.176139, 0.176128,
    -0.155193, 0.155193,
    -0.562233, 0.562394,
    0.406748, -0.407084,
    -0.430190, 0.430303,
    0.229040, -0.228902,
};

float Cg_init[2] = {
    -0.398884, -0.398919
};

float xstd_init[12] = {
    0.003549, 0.001237, 0.102839, 0.171781, 0.001563, 0.000460, 0.024359, 0.074423, 0.001749, 0.000091, 0.017300, 0.067467
};

float xmean_init[12] = {
    0.009786, -0.006307, 0.170815, 0.580815, 0.003241, -0.007724, 0.006716, 0.051037, 0.003259, -0.007808, 0.004889, 0.068000
};

