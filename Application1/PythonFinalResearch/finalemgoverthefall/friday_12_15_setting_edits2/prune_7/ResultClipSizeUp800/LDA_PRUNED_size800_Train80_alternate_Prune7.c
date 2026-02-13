// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_7\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.13%
// test_accuracy: 67.08%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-17 12:39:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.687580, 0.687632,
    0.297751, -0.297790,
    0.470869, -0.470921,
    0.601758, -0.601745,
    -0.395391, 0.395137,
    0.129741, -0.129397,
    -0.103208, 0.103198,
    -0.005527, 0.005450,
    0.252114, -0.251981,
    -0.086517, 0.086248,
    -0.535470, 0.535538,
    -0.014958, 0.015051,
};

float Cg_init[2] = {
    -0.308256, -0.308259
};

float xstd_init[12] = {
    0.003909, 0.001667, 0.147518, 0.204018, 0.001043, 0.000187, 0.026720, 0.080789, 0.000652, 0.000163, 0.029641, 0.105549
};

float xmean_init[12] = {
    0.010046, -0.005862, 0.239005, 0.680374, 0.003362, -0.007766, 0.008818, 0.074614, 0.003505, -0.007736, 0.013013, 0.117547
};

