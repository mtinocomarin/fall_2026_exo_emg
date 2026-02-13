// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.37%
// test_accuracy: 66.18%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_31.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 12:46:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.781947, 0.781993,
    0.457995, -0.458023,
    0.756862, -0.756913,
    0.770293, -0.770277,
    -0.709463, 0.709467,
    0.411456, -0.411458,
    -0.130414, 0.130422,
    -0.006435, 0.006415,
    0.406626, -0.406520,
    -0.376886, 0.376709,
    -0.474307, 0.474361,
    0.077313, -0.077287,
};

float Cg_init[2] = {
    -0.529146, -0.529151
};

float xstd_init[12] = {
    0.003810, 0.001625, 0.154643, 0.210083, 0.001065, 0.000186, 0.028210, 0.080232, 0.000682, 0.000172, 0.030742, 0.106658
};

float xmean_init[12] = {
    0.010191, -0.005791, 0.254036, 0.690093, 0.003396, -0.007763, 0.009453, 0.076842, 0.003531, -0.007728, 0.012755, 0.121672
};

