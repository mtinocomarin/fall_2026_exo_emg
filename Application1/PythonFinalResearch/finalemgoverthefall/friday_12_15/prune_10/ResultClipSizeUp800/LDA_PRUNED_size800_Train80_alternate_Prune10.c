// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.88%
// test_accuracy: 69.17%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt']}
// generated: 2025-12-12 12:45:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.836491, 0.836544,
    0.350532, -0.350553,
    0.634007, -0.634058,
    0.729152, -0.729142,
    -0.400300, 0.399924,
    0.192830, -0.192382,
    -0.147371, 0.147361,
    -0.045299, 0.045234,
    0.225907, -0.225859,
    -0.097336, 0.097261,
    -0.567647, 0.567660,
    -0.013531, 0.013561,
};

float Cg_init[2] = {
    -0.392075, -0.392076
};

float xstd_init[12] = {
    0.003888, 0.001691, 0.151755, 0.208799, 0.001067, 0.000186, 0.027982, 0.079813, 0.000668, 0.000168, 0.030446, 0.108072
};

float xmean_init[12] = {
    0.010209, -0.005777, 0.248567, 0.689394, 0.003393, -0.007763, 0.009535, 0.075515, 0.003527, -0.007729, 0.013374, 0.122910
};

