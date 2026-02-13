// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.00%
// test_accuracy: 72.32%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 15:49:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.153475, 1.153453,
    -0.083069, 0.083089,
    0.889240, -0.889278,
    0.797660, -0.797635,
    1.158589, -1.158683,
    -1.664548, 1.664697,
    0.053632, -0.053660,
    0.169322, -0.169353,
    -0.483034, 0.483009,
    0.726677, -0.726472,
    -0.607140, 0.607061,
    0.057192, -0.057296,
};

float Cg_init[2] = {
    -0.535681, -0.535685
};

float xstd_init[12] = {
    0.003686, 0.001391, 0.102555, 0.170158, 0.001728, 0.000529, 0.031462, 0.088236, 0.001240, 0.000096, 0.019541, 0.066183
};

float xmean_init[12] = {
    0.009803, -0.006230, 0.170591, 0.579886, 0.003303, -0.007701, 0.008457, 0.055086, 0.003261, -0.007803, 0.005257, 0.068572
};

