// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 79.03%
// test_accuracy: 73.96%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 16:05:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.607033, 0.607022,
    -0.279810, 0.279813,
    0.453493, -0.453509,
    0.657676, -0.657663,
    0.749400, -0.749183,
    -0.794895, 0.794631,
    -0.010988, 0.011039,
    -0.097706, 0.097710,
    -0.430075, 0.429952,
    0.345195, -0.345062,
    -0.304612, 0.304579,
    0.097830, -0.097905,
};

float Cg_init[2] = {
    -0.300021, -0.300001
};

float xstd_init[12] = {
    0.003710, 0.001351, 0.103409, 0.167803, 0.001499, 0.000441, 0.025799, 0.075186, 0.001647, 0.000089, 0.015595, 0.068705
};

float xmean_init[12] = {
    0.009792, -0.006269, 0.173297, 0.583833, 0.003168, -0.007738, 0.006519, 0.049278, 0.003244, -0.007808, 0.004111, 0.067111
};

