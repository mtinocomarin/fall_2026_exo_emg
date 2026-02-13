// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.15%
// test_accuracy: 72.12%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 15:46:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.523202, 0.523167,
    -0.278482, 0.278500,
    0.309218, -0.309232,
    0.585940, -0.585928,
    0.622055, -0.621935,
    -0.710546, 0.710399,
    -0.003336, 0.003368,
    -0.034819, 0.034817,
    -0.381834, 0.381683,
    0.305054, -0.304751,
    -0.274829, 0.274731,
    0.122795, -0.122937,
};

float Cg_init[2] = {
    -0.229383, -0.229364
};

float xstd_init[12] = {
    0.003854, 0.001497, 0.108615, 0.169530, 0.001377, 0.000396, 0.023077, 0.072337, 0.001561, 0.000086, 0.014733, 0.065126
};

float xmean_init[12] = {
    0.009902, -0.006181, 0.179488, 0.593436, 0.003079, -0.007762, 0.005368, 0.046923, 0.003211, -0.007811, 0.003726, 0.064513
};

