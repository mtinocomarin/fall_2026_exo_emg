// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.00%
// test_accuracy: 54.33%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-17 13:45:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.466935, 0.466900,
    0.352464, -0.352397,
    -0.040623, 0.040617,
    -0.221034, 0.220990,
    -0.340547, 0.340615,
    -0.229624, 0.229566,
    -0.007487, 0.007472,
    0.270034, -0.270047,
    -0.568787, 0.568758,
    0.297516, -0.297427,
    0.023592, -0.023598,
    0.134873, -0.134929,
};

float Cg_init[2] = {
    -0.178359, -0.178347
};

float xstd_init[12] = {
    0.001038, 0.000081, 0.011274, 0.079736, 0.003176, 0.000869, 0.093437, 0.186727, 0.000864, 0.000114, 0.019397, 0.075234
};

float xmean_init[12] = {
    0.006491, -0.007688, 0.004185, 0.145785, 0.008561, -0.006856, 0.104821, 0.435015, 0.004362, -0.007713, 0.010544, 0.129293
};

