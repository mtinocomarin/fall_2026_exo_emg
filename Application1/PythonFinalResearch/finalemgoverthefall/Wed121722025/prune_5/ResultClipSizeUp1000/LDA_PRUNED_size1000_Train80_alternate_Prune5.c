// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 67.06%
// test_accuracy: 53.95%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 13:44:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.229886, 0.229739,
    0.157933, -0.157581,
    -0.065706, 0.065670,
    -0.023904, 0.023714,
    -0.286722, 0.286757,
    -0.193804, 0.193785,
    -0.133551, 0.133521,
    0.359778, -0.359780,
    -0.371330, 0.371268,
    0.187008, -0.186850,
    0.015900, -0.015914,
    0.121885, -0.121977,
};

float Cg_init[2] = {
    -0.105413, -0.105385
};

float xstd_init[12] = {
    0.001042, 0.000082, 0.013399, 0.080402, 0.003093, 0.000842, 0.091136, 0.182968, 0.000860, 0.000111, 0.020061, 0.075678
};

float xmean_init[12] = {
    0.006521, -0.007685, 0.005536, 0.146511, 0.008520, -0.006870, 0.103548, 0.432866, 0.004318, -0.007718, 0.010916, 0.126121
};

