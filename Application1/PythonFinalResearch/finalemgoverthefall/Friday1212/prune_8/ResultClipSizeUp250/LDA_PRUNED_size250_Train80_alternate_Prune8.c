// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.06%
// test_accuracy: 75.00%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 15:49:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.339293, 1.339280,
    0.139569, -0.139608,
    0.697448, -0.697457,
    0.981135, -0.981106,
    0.927900, -0.927943,
    -1.074363, 1.074367,
    0.229398, -0.229354,
    -0.232397, 0.232402,
    -0.163314, 0.163256,
    0.148344, -0.148082,
    -0.451841, 0.451756,
    0.531255, -0.531377,
};

float Cg_init[2] = {
    -0.542545, -0.542542
};

float xstd_init[12] = {
    0.003784, 0.001376, 0.099380, 0.172285, 0.001752, 0.000536, 0.035574, 0.091804, 0.000906, 0.000097, 0.020600, 0.066055
};

float xmean_init[12] = {
    0.009931, -0.006221, 0.169861, 0.566250, 0.003310, -0.007701, 0.009444, 0.051875, 0.003249, -0.007803, 0.004722, 0.067708
};

