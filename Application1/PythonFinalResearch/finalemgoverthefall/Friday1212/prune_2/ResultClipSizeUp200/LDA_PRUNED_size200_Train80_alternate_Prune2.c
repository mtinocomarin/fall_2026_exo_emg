// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.33%
// test_accuracy: 75.00%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 15:46:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.712822, 0.712813,
    -0.118884, 0.118921,
    0.510072, -0.510069,
    0.466611, -0.466626,
    1.144121, -1.144194,
    -1.323165, 1.323384,
    0.131895, -0.132015,
    0.018334, -0.018350,
    -0.170884, 0.170983,
    0.145136, -0.145487,
    -0.399753, 0.399873,
    0.539546, -0.539381,
};

float Cg_init[2] = {
    -0.327826, -0.327843
};

float xstd_init[12] = {
    0.003257, 0.001125, 0.095591, 0.160254, 0.001433, 0.000453, 0.024686, 0.072533, 0.000848, 0.000097, 0.016705, 0.062324
};

float xmean_init[12] = {
    0.009646, -0.006301, 0.167407, 0.568889, 0.003073, -0.007754, 0.005481, 0.043556, 0.003190, -0.007805, 0.003852, 0.064667
};

