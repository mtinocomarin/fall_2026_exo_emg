// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.67%
// test_accuracy: 53.33%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_8.txt', 'act1\\trial_12.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_25.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-17 13:48:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.594950, 0.595092,
    0.376015, -0.376297,
    -0.060349, 0.060374,
    -0.271187, 0.271331,
    -0.306313, 0.306297,
    -0.355365, 0.355438,
    -0.062338, 0.062305,
    0.252604, -0.252584,
    -0.638939, 0.639072,
    0.425570, -0.425809,
    -0.002097, 0.002131,
    0.154753, -0.154692,
};

float Cg_init[2] = {
    -0.251791, -0.251845
};

float xstd_init[12] = {
    0.001102, 0.000080, 0.011807, 0.081276, 0.003217, 0.000864, 0.092325, 0.186774, 0.000870, 0.000121, 0.019566, 0.076791
};

float xmean_init[12] = {
    0.006552, -0.007686, 0.004346, 0.146371, 0.008343, -0.006907, 0.099210, 0.425259, 0.004454, -0.007705, 0.010815, 0.131482
};

