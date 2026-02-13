// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.14%
// test_accuracy: 74.55%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 15:49:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.576848, 0.576858,
    -0.445884, 0.445899,
    0.532767, -0.532796,
    0.640948, -0.640943,
    0.909131, -0.909047,
    -0.710781, 0.710672,
    -0.243850, 0.243885,
    -0.077877, 0.077873,
    -0.575058, 0.575050,
    0.412557, -0.412603,
    -0.320256, 0.320275,
    0.087042, -0.087035,
};

float Cg_init[2] = {
    -0.327567, -0.327573
};

float xstd_init[12] = {
    0.003719, 0.001394, 0.105929, 0.172964, 0.001351, 0.000383, 0.021080, 0.068689, 0.001671, 0.000089, 0.015574, 0.069056
};

float xmean_init[12] = {
    0.009798, -0.006223, 0.180953, 0.589714, 0.003097, -0.007766, 0.005257, 0.047372, 0.003262, -0.007807, 0.003848, 0.068229
};

