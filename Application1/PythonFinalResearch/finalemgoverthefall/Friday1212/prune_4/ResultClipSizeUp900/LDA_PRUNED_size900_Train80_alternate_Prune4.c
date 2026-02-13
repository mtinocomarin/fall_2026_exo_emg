// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.58%
// test_accuracy: 71.69%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:47:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.582458, 0.582479,
    -0.213066, 0.213044,
    0.403339, -0.403372,
    0.534519, -0.534499,
    0.660574, -0.660602,
    -0.751993, 0.752041,
    -0.010145, 0.010146,
    -0.019772, 0.019746,
    -0.413890, 0.413834,
    0.443905, -0.443709,
    -0.316913, 0.316850,
    0.066441, -0.066548,
};

float Cg_init[2] = {
    -0.241251, -0.241248
};

float xstd_init[12] = {
    0.003362, 0.001347, 0.104078, 0.166110, 0.001302, 0.000371, 0.021781, 0.070704, 0.001427, 0.000079, 0.013551, 0.063799
};

float xmean_init[12] = {
    0.009604, -0.006286, 0.175407, 0.586050, 0.003062, -0.007767, 0.005154, 0.047521, 0.003187, -0.007813, 0.003165, 0.064244
};

