// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_10\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.88%
// test_accuracy: 74.11%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-17 17:04:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.171738, -0.171690,
    -0.257741, 0.257587,
    0.018309, -0.018280,
    -0.139152, 0.139222,
    1.981468, -1.981309,
    -1.682902, 1.682701,
    -0.349637, 0.349658,
    0.187327, -0.187295,
    -0.453546, 0.453506,
    -0.975692, 0.975765,
    0.311677, -0.311730,
    1.858325, -1.858296,
};

float Cg_init[2] = {
    -0.753178, -0.753134
};

float xstd_init[12] = {
    0.000912, 0.000080, 0.007429, 0.068581, 0.000765, 0.000130, 0.016115, 0.058190, 0.003451, 0.001006, 0.115935, 0.210057
};

float xmean_init[12] = {
    0.005597, -0.007757, 0.001645, 0.092598, 0.002430, -0.007845, 0.005455, 0.051688, 0.008978, -0.006644, 0.127792, 0.461948
};

