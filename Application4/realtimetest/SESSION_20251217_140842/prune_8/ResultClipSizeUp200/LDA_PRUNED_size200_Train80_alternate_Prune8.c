// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.83%
// test_accuracy: 58.33%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:41:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.158062, 2.158007,
    -0.001160, 0.001339,
    -0.680038, 0.680027,
    -0.107068, 0.106966,
    -0.309997, 0.309966,
    -0.680215, 0.680207,
    0.350850, -0.350839,
    -0.596674, 0.596701,
    -0.222266, 0.222192,
    -0.341049, 0.341065,
    0.108366, -0.108378,
    1.286802, -1.286753,
};

float Cg_init[2] = {
    -1.271293, -1.271294
};

float xstd_init[12] = {
    0.000829, 0.000114, 0.012249, 0.097922, 0.003240, 0.001179, 0.100583, 0.150111, 0.001268, 0.000176, 0.030250, 0.102559
};

float xmean_init[12] = {
    0.005699, -0.007673, 0.005556, 0.163333, 0.010839, -0.006143, 0.168889, 0.608333, 0.005046, -0.007568, 0.023889, 0.239167
};

