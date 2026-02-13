// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.00%
// test_accuracy: 72.92%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:49:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.755819, 0.755858,
    -0.186817, 0.186798,
    0.536898, -0.536925,
    0.693088, -0.693079,
    0.828580, -0.828473,
    -0.837741, 0.837604,
    -0.066657, 0.066689,
    -0.095830, 0.095834,
    -0.576282, 0.576283,
    0.512757, -0.512851,
    -0.406312, 0.406346,
    0.063053, -0.063023,
};

float Cg_init[2] = {
    -0.346137, -0.346139
};

float xstd_init[12] = {
    0.003781, 0.001374, 0.106972, 0.174203, 0.001532, 0.000449, 0.026875, 0.077877, 0.001785, 0.000093, 0.016596, 0.069967
};

float xmean_init[12] = {
    0.009798, -0.006253, 0.177556, 0.587466, 0.003204, -0.007735, 0.007022, 0.051133, 0.003282, -0.007806, 0.004356, 0.069134
};

