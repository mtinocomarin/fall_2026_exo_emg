// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.40%
// test_accuracy: 72.32%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 15:47:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.890198, 0.890206,
    -0.138362, 0.138378,
    0.589366, -0.589388,
    0.690459, -0.690459,
    0.962614, -0.962563,
    -1.387041, 1.386965,
    0.073687, -0.073671,
    0.162094, -0.162085,
    -0.455492, 0.455504,
    0.730706, -0.730770,
    -0.588470, 0.588500,
    0.091284, -0.091266,
};

float Cg_init[2] = {
    -0.391139, -0.391147
};

float xstd_init[12] = {
    0.003627, 0.001369, 0.102414, 0.170930, 0.001652, 0.000503, 0.029839, 0.084682, 0.001185, 0.000093, 0.018533, 0.065764
};

float xmean_init[12] = {
    0.009726, -0.006256, 0.170341, 0.575918, 0.003223, -0.007720, 0.007551, 0.050612, 0.003214, -0.007807, 0.004694, 0.066735
};

