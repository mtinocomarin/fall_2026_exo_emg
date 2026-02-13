// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.26%
// test_accuracy: 75.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:04:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.528122, 0.528060,
    -0.412169, 0.412203,
    0.328791, -0.328798,
    0.623057, -0.623037,
    0.796089, -0.795992,
    -0.870515, 0.870423,
    -0.009258, 0.009267,
    -0.120348, 0.120331,
    0.644273, -0.644484,
    0.017119, -0.016539,
    -0.361500, 0.361323,
    -0.046878, 0.046620,
};

float Cg_init[2] = {
    -0.395361, -0.395357
};

float xstd_init[12] = {
    0.003728, 0.001422, 0.104650, 0.167767, 0.001334, 0.000415, 0.024376, 0.072221, 0.000516, 0.000072, 0.014427, 0.062862
};

float xmean_init[12] = {
    0.009722, -0.006263, 0.175270, 0.584608, 0.003080, -0.007749, 0.006175, 0.047512, 0.003082, -0.007815, 0.003533, 0.063779
};

