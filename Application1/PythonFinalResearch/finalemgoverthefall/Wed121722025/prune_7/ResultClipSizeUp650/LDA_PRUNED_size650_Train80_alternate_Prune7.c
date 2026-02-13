// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.17%
// test_accuracy: 52.08%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 13:44:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.549461, 0.549506,
    0.350679, -0.350764,
    0.027909, -0.027900,
    -0.225186, 0.225224,
    -0.566775, 0.566823,
    -0.199570, 0.199537,
    0.232820, -0.232836,
    0.311945, -0.311931,
    -0.561777, 0.561851,
    0.246246, -0.246365,
    0.005214, -0.005187,
    0.146587, -0.146565,
};

float Cg_init[2] = {
    -0.205816, -0.205838
};

float xstd_init[12] = {
    0.001038, 0.000081, 0.013027, 0.082033, 0.003085, 0.000844, 0.089943, 0.181835, 0.000867, 0.000114, 0.019600, 0.072826
};

float xmean_init[12] = {
    0.006473, -0.007686, 0.005111, 0.145334, 0.008614, -0.006846, 0.104311, 0.438600, 0.004387, -0.007712, 0.010178, 0.131601
};

