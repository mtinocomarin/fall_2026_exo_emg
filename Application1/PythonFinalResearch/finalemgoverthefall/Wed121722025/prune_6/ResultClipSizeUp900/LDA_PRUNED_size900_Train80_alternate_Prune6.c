// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.33%
// test_accuracy: 54.04%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 13:44:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.321595, 0.321485,
    0.188259, -0.187979,
    -0.053366, 0.053339,
    -0.058066, 0.057905,
    -0.253173, 0.253249,
    -0.240358, 0.240332,
    -0.087682, 0.087658,
    0.308176, -0.308187,
    -0.407718, 0.407780,
    0.209785, -0.209925,
    0.047309, -0.047257,
    0.097207, -0.097179,
};

float Cg_init[2] = {
    -0.120936, -0.120927
};

float xstd_init[12] = {
    0.001042, 0.000083, 0.013120, 0.081439, 0.003178, 0.000862, 0.092118, 0.183969, 0.000867, 0.000112, 0.019734, 0.076438
};

float xmean_init[12] = {
    0.006532, -0.007684, 0.005249, 0.146697, 0.008550, -0.006858, 0.103409, 0.434299, 0.004322, -0.007716, 0.010890, 0.127059
};

