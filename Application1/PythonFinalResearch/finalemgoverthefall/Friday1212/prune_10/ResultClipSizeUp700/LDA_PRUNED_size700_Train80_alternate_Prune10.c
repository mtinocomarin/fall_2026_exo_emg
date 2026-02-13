// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.89%
// test_accuracy: 73.08%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:51:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.701927, 0.701833,
    -0.317849, 0.317936,
    0.479938, -0.479932,
    0.714047, -0.714035,
    1.012714, -1.012543,
    -0.894051, 0.893729,
    -0.310639, 0.310770,
    -0.046601, 0.046626,
    0.713845, -0.714069,
    -0.135082, 0.135599,
    -0.374252, 0.374062,
    0.093028, -0.093198,
};

float Cg_init[2] = {
    -0.529772, -0.529771
};

float xstd_init[12] = {
    0.003528, 0.001254, 0.107035, 0.171781, 0.001303, 0.000399, 0.020772, 0.071339, 0.000514, 0.000079, 0.016447, 0.060520
};

float xmean_init[12] = {
    0.009784, -0.006235, 0.180187, 0.596224, 0.003078, -0.007758, 0.005408, 0.048322, 0.003102, -0.007813, 0.004289, 0.062308
};

