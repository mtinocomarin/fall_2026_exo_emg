// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.04%
// test_accuracy: 74.34%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 16:07:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.529510, 0.529467,
    -0.286088, 0.286148,
    0.466450, -0.466484,
    0.501742, -0.501732,
    0.872172, -0.872223,
    -0.820997, 0.821107,
    -0.109832, 0.109797,
    -0.174728, 0.174705,
    0.597304, -0.597324,
    0.085077, -0.085016,
    -0.326170, 0.326157,
    -0.029294, 0.029252,
};

float Cg_init[2] = {
    -0.403504, -0.403525
};

float xstd_init[12] = {
    0.003139, 0.001205, 0.100148, 0.163008, 0.001188, 0.000355, 0.018016, 0.065693, 0.000513, 0.000070, 0.013553, 0.060389
};

float xmean_init[12] = {
    0.009419, -0.006364, 0.171333, 0.580468, 0.003026, -0.007770, 0.004496, 0.045770, 0.003068, -0.007817, 0.003353, 0.062573
};

