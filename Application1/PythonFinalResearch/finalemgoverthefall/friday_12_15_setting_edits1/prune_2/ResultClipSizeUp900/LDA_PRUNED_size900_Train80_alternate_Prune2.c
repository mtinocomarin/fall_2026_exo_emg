// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.45%
// test_accuracy: 70.22%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:12:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.539036, 0.539054,
    0.024091, -0.024083,
    0.492846, -0.492869,
    0.194532, -0.194544,
    -0.298846, 0.299044,
    0.104992, -0.105228,
    -0.015625, 0.015637,
    0.158803, -0.158783,
    0.200673, -0.200786,
    -0.250967, 0.251152,
    -0.267741, 0.267678,
    0.228136, -0.228155,
};

float Cg_init[2] = {
    -0.162055, -0.162066
};

float xstd_init[12] = {
    0.004105, 0.001827, 0.337971, 0.123224, 0.000922, 0.000163, 0.041319, 0.129677, 0.000623, 0.000150, 0.046188, 0.139396
};

float xmean_init[12] = {
    0.010078, -0.005816, 0.423072, 1.036550, 0.003294, -0.007778, 0.008497, 0.617137, 0.003486, -0.007742, 0.014444, 0.689999
};

