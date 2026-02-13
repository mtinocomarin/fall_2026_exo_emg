// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.36%
// test_accuracy: 85.42%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 13:12:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.765818, 0.765849,
    -0.003447, 0.003432,
    0.636612, -0.636612,
    0.408029, -0.408037,
    -0.424195, 0.424137,
    0.075619, -0.075567,
    -0.043753, 0.043762,
    0.282524, -0.282522,
    0.009303, -0.009417,
    -0.126153, 0.126321,
    -0.418767, 0.418716,
    0.192941, -0.192946,
};

float Cg_init[2] = {
    -0.371458, -0.371462
};

float xstd_init[12] = {
    0.004539, 0.002165, 0.328587, 0.113088, 0.001507, 0.000277, 0.070165, 0.143224, 0.000659, 0.000154, 0.044440, 0.152835
};

float xmean_init[12] = {
    0.011119, -0.005419, 0.463985, 1.046207, 0.003600, -0.007721, 0.019157, 0.627127, 0.003568, -0.007731, 0.016858, 0.691494
};

